/*
 * Copyright 2020 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FIRCLSRecordFrame.h"

@implementation FIRCLSRecordFrame

- (instancetype)initWithDict:(NSDictionary *)dict {
  self = [super initWithDict:dict];
  if (self) {
    _pc = [dict[@"pc"] unsignedIntegerValue];
    _symbol = dict[@"symbol"];
    _offset = [dict[@"offset"] unsignedIntegerValue];
  }
  return self;
}

@end