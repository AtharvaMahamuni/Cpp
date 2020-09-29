#include <iostream> //this is the header file which is built in with gcc
#include "adder.h"  //this is the file which we made
using namespace std;

int main()
{
    float v3 = 3.4;
    float v4 = 5.7;

    //this addme() function get called from adder.h
    //header file which we made by our own.
    cout << addme(v3, v4) << endl;

    return 0;
}

//Some of the popular libraries of C++ on the internet.

//cpphttplib: https://github.com/yhirose/cpp-httplib
//This is very popular and respected library

//lame: https://lame.sourceforge.io/index.php
//It is another popular library for encoding audios.

//CppCMS - C++ web frameowork: http://cppcms.com/wikipp/en/page/main

// ipkn/crow : https://github.com/ipkn/crow
//It is very popular framework for web development.

//kore: https://kore.io/
//Kore is an easy to use web platform for writing scalable, concurrent APIs in C or Python.
//Its primary goals are security, scalability and allowing rapid development and deployment of such APIs.

// wt : https://www.webtoolkit.eu/wt
//Wt is a web GUI library in modern C++. Quickly develop highly interactive web UIs with widgets, without having to write a single line of JavaScript. Wt handles all request handling and page rendering for you, so you can focus on functionality.

//  mongodb/mongo-cxx-driver: https://github.com/mongodb/mongo-cxx-driver

//sheredom/json.h : https://github.com/sheredom/json.h
//for parsing json files.
