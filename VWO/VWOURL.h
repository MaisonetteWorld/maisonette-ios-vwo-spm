//
//  VWOURL.h
//  VWO
//
//  Created by Kaunteya Suryawanshi on 15/09/17.
//  Copyright © 2017 vwo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class VWOCampaign, VWOGoal, VWOConfig;

@interface VWOURL : NSObject

+ (NSURL *)forFetchingCampaignsConfig:(VWOConfig *)config;

+ (NSURL *)forMakingUserPartOfCampaign:(VWOCampaign *)campaign
                                config:(VWOConfig *)config
                              dateTime:(NSDate *)date;

+ (NSURL *)forMarkingGoal:(VWOGoal *)goal
                withValue:(nullable NSNumber *)goalValue
                 campaign:(VWOCampaign *)campaign
                 dateTime:(NSDate *)date
                   config:(VWOConfig *)config;

@end

NS_ASSUME_NONNULL_END
