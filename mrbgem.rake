MRuby::Gem::Specification.new('mobiruby-common') do |spec|
  spec.license = 'MIT'
  spec.authors = 'MobiRuby developers'

  [spec.cc, spec.cxx, spec.objc].each do |cc|
    cc.include_paths << "#{mruby.root}/src"
  end

  spec.test_preload = "#{dir}/test/mobitest.rb"
  @test_rbfiles = Dir.glob("#{dir}/test/*.rb")
  @test_objs << Dir.glob("#{dir}/test/*.{rbx}").map do |f|
    basename = f.relative_path_from(dir).to_s.pathmap("#{build_dir}/%X")
    file "#{basename}.c" => f do |t|
      FileUtils.mkdir_p File.dirname(t.name)
      open(t.name, 'w') do |out|
        out.puts '#include <stdint.h>'
        mrbc.run out, f, "mruby_data_#{File.basename(basename).gsub('-','_')}"
      end
    end
    file objfile(basename) => "#{basename}.c"
    objfile(basename)
  end
end
