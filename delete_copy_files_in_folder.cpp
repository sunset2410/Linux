#include <cstdint>
#include <filesystem>
#include <iostream>
#include <string>
#include<bits/stdc++.h>

int main()
{
    //std::cout << __cplusplus;
    const char* const name { "test 111"};
    std::string fname {name};
    std::cout << fname << std::endl;
    // xoa 1 folder
    std::filesystem::path source_path{"/home/sunrise/projects/leetcode/updateAPN_26_11_23/new"};
    std::string dest = "/home/sunrise/projects/leetcode/updateAPN_26_11_23/old";
    std::filesystem::path target_path{"/home/sunrise/projects/leetcode/updateAPN_26_11_23/old"};
    
    //std::uintmax_t n{std::filesystem::remove_all(dest, std::filesystem::remove_only)};
    //std::cout << "Deleted " << n << " files or directories\n";

  

        // std::uintmax_t count {0U};
        // // loop over all the "directory_entry"'s in "pathtofolder":
        // for(const auto &item : std::filesystem::directory_iterator(target_path)) {
        //     // returns the number of deleted entities since c++17:
        //     count += std::filesystem::remove_all(item.path());
        // }
        // std::cout << "deleted " << count << " files and directories\n";


    // Duyệt qua tất cả các file trong parent folder
    // for (auto it = std::filesystem::recursive_directory_iterator(dest); it != std::filesystem::recursive_directory_iterator(); ++it) {
    // // Nếu là file bình thường thì xóa
    //     if (it.is_regular_file()) {
    //         std::filesystem::remove(it.path());
    //     }
    // }

    // okie, xoas file trong folder
    for (auto const& dir_entry : std::filesystem::directory_iterator(dest)) {
        std::cout << dir_entry.path() << '\n';
        std::filesystem::remove_all(dir_entry.path());
    }    


    // tao folder va copy file vao folder do
    if (!std::filesystem::is_directory(target_path)) {
    // Tạo thư mục đích
        std::filesystem::create_directories(target_path);
    }

    // Sao chép tệp
    std::filesystem::copy(source_path, target_path);

    // for (auto entry : std::filesystem::recursive_directory_iterator(source_path)) {
    // if (entry.is_regular_file()) {
    //     // Check if the file exists in the destination folder
    //     std::filesystem::path destinationFilePath = target_path / entry.path().relative_path(sourcePath);

    //     if (std::filesystem::exists(destinationFilePath)) {
    //     // Replace the existing file with the newer version
    //     std::filesystem::copy_file(entry.path(), destinationFilePath, std::filesystem::copy_options::overwrite_existing);
    //     } else {
    //     // Copy the file to the destination folder
    //     std::filesystem::copy_file(entry.path(), destinationFilePath);
    //     }
    // }
    // }


    // for (auto entry:std::filesystem::recursive_directory_iterator(source_path)) {
    //     if (entry.is_regular_file()) {
    //         // Check if the file exists in the destination folder
    //         // Lấy đường dẫn tương đối của file trong folder đích
    //         std::string relative_path = std::filesystem::native(entry.path()).substr(std::filesystem::native(source_path).length());
    //         std::filesystem::path destinationFilePath = target_path / relative_path;
    //         std::filesystem::copy_file(entry.path(), destinationFilePath, std::filesystem::copy_options::overwrite_existing);
    //     }
    // }


    std::cout << "done---------" << std::endl;
}
