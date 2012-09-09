class RequireTest1 < TestCase
  def test_10_require1
    require2 = 'OK'
    require 'require1'
    eq "OK", require2
  end

  def test_20_check_const
    eq 'C1', ReqConst1
  end

  def test_30_check_func
    eq 'REQUIRE1', require1
  end

end
RequireTest1.run


