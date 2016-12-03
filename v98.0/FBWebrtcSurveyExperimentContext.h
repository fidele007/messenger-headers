/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBWebrtcSurveyExperimentContext : FBExperimentContext {

	int _star_rating_percent;
	int _feedback_star_rating_gate;
	int _promo_star_rating_gate;
	int _feedback_percent;
	int _basic_log_permyriad;
	int _debug_log_in_basic_log_percent;
	int _log_level;
	NSString* _feedback_survey_id;

}

@property (nonatomic,readonly) int star_rating_percent;                         //@synthesize star_rating_percent=_star_rating_percent - In the implementation block
@property (nonatomic,readonly) int feedback_star_rating_gate;                   //@synthesize feedback_star_rating_gate=_feedback_star_rating_gate - In the implementation block
@property (nonatomic,readonly) int promo_star_rating_gate;                      //@synthesize promo_star_rating_gate=_promo_star_rating_gate - In the implementation block
@property (nonatomic,readonly) int feedback_percent;                            //@synthesize feedback_percent=_feedback_percent - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedback_survey_id;              //@synthesize feedback_survey_id=_feedback_survey_id - In the implementation block
@property (nonatomic,readonly) int basic_log_permyriad;                         //@synthesize basic_log_permyriad=_basic_log_permyriad - In the implementation block
@property (nonatomic,readonly) int debug_log_in_basic_log_percent;              //@synthesize debug_log_in_basic_log_percent=_debug_log_in_basic_log_percent - In the implementation block
@property (nonatomic,readonly) int log_level;                                   //@synthesize log_level=_log_level - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)feedback_star_rating_gate;
-(int)feedback_percent;
-(int)star_rating_percent;
-(int)basic_log_permyriad;
-(int)promo_star_rating_gate;
-(NSString *)feedback_survey_id;
-(int)debug_log_in_basic_log_percent;
-(int)log_level;
@end
