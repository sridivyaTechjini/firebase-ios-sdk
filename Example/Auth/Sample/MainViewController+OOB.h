/*
 * Copyright 2019 Google
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

#import "MainViewController.h"

#import "FirebaseAuth.h"
#import "StaticContentTableViewManager.h"

NS_ASSUME_NONNULL_BEGIN

static NSString *const kPasswordResetAction = @"resetPassword";

static NSString *const kVerifyEmailAction = @"verifyEmail";

@interface MainViewController (OOB)

- (StaticContentTableViewSection *)oobSection;

@end

NS_ASSUME_NONNULL_END
