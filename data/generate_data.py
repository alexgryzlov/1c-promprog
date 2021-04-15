import cv2 as cv

if __name__ == '__main__':
    m = cv.imread("../img/map.png", cv.IMREAD_COLOR)
    with open("data.h", 'w') as f:
        f.write("#include <vector>\n"
                "#include <cstdint>\n"
                "std::vector<std::vector<uint8_t>> col{")
        for i in range(len(m)):
            f.write("{")
            for j in range(len(m[i])):
                f.write(f"{m[i][j][2 - i]}")
                if j != len(m[i]) - 1:
                    f.write(",")
            f.write("}")
            if i != len(m) - 1:
                f.write(",")
        f.write("};")
