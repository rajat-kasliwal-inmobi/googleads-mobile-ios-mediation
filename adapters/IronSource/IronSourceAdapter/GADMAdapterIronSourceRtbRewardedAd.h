// Copyright 2024 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <IronSource/IronSource.h>

@interface GADMAdapterIronSourceRtbRewardedAd
    : NSObject <GADMediationRewardedAd, ISARewardedAdDelegate, ISARewardedAdLoaderDelegate>

@property(nonatomic, copy) NSString *instanceID;
@property(nonatomic, strong) ISARewardedAd *biddingISARewardedAd;
@property(copy, nonatomic)
    GADMediationRewardedLoadCompletionHandler rewardedAdLoadCompletionHandler;
@property(weak, nonatomic) id<GADMediationRewardedAdEventDelegate> rewardedAdEventDelegate;

/// Initializes a new instance with adConfiguration and completionHandler.
- (void)loadRewardedAdForConfiguration:(GADMediationRewardedAdConfiguration *)adConfiguration
                     completionHandler:(GADMediationRewardedLoadCompletionHandler)completionHandler;

@end
