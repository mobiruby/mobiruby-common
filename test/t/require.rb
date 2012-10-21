require 'require1'

assert_equal 'REQUIRE_TEST_1', require_test_1
assert_equal 123.45, REQUIRE_TEST_2
assert_raise NoMethodError do
  dummy = require_test_3
end
assert RequireTest4.is_a?(Class)

assert_raise ScriptError do
  require 'require1_dummy'
end
