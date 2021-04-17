cc_binary(
    name = "builder",
    srcs = glob([
        "main.cpp",
        "builders/*.h",
        "builders/base/Burger.h",
        "Chef.cpp",
        "Chef.h",
        "builders/BurgerBuilder.cpp",
        "builders/HamburgerBuilder.cpp",
        "builders/base/Burger.cpp",
        "builders/VegiburgerBuilder.cpp",]),
    includes = ["builders"]
)

cc_library(
    name = "burger_shop",
    srcs = glob([
        "Chef.cpp",
        "builders/BurgerBuilder.cpp",
        "builders/HamburgerBuilder.cpp",
        "builders/base/Burger.cpp",
        "builders/VegiburgerBuilder.cpp",]),
    hdrs = glob([
        "Chef.h",
        "builders/*.h",
        "builders/base/Burger.h",
        ]),
    copts = ["-Ibuilders"],
    visibility = ["//visibility:public"],
)
