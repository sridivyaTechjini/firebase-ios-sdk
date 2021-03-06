// Copyright 2019 Google
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "FIRCLSFileManager.h"

#import <XCTest/XCTest.h>

@interface FIRCLSMockFileManager : FIRCLSFileManager

@property(nonatomic, copy) NSString *pathNamespace;

// Number of calls to removeItemAtPath are expected for the unit test
@property(nonatomic) NSInteger expectedRemoveCount;

// Incremented when a remove happens with removeItemAtPath
@property(nonatomic) NSInteger removeCount;

// Overrides fileSizeAtPath if set
@property(nonatomic, copy) NSNumber *fileSizeAtPathResult;

// Will be fulfilled when the expected number of removes have happened
// using removeItemAtPath
//
// Users should initialize this in their test.
@property(nonatomic, strong) XCTestExpectation *removeExpectation;

@property(nonatomic, copy) NSString *removedItemAtPath_path;

// Overriding the method for testing Settings
- (BOOL)removeItemAtPath:(NSString *)path;

// Overrides moveItemAtPath if set
@property(nonatomic) NSNumber *moveItemAtPathResult;
@property(nonatomic, copy) NSString *moveItemAtPath_path;
@property(nonatomic, copy) NSString *moveItemAtPath_destDir;

- (BOOL)moveItemAtPath:(NSString *)path toDirectory:(NSString *)destDir;

@end
