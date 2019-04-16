#include "rice/Class.hpp"
#include "rice/String.hpp"

using namespace Rice;

Object test_hello(Object /* self */) {
    String str("hello world");
    return str;
}

extern "C" {
    void Init_test() {
        Class rb_cTest = define_class("test")
            .define_method("hello", &test_hello);
    }
}
