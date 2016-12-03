/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBFeedStorySocialPromptExperimentContext : FBExperimentContext {

	NSString* _buttonTitleInsideAttachment;
	NSString* _buttonTitleUnderFeedStory;
	BOOL _promptUnderSocialPromptStory;
	BOOL _showAfterInteraction;

}

@property (nonatomic,copy) NSString * buttonTitleInsideAttachment;              //@synthesize buttonTitleInsideAttachment=_buttonTitleInsideAttachment - In the implementation block
@property (nonatomic,copy) NSString * buttonTitleUnderFeedStory;                //@synthesize buttonTitleUnderFeedStory=_buttonTitleUnderFeedStory - In the implementation block
@property (assign,nonatomic) BOOL promptUnderSocialPromptStory;                 //@synthesize promptUnderSocialPromptStory=_promptUnderSocialPromptStory - In the implementation block
@property (assign,nonatomic) BOOL showAfterInteraction;                         //@synthesize showAfterInteraction=_showAfterInteraction - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)buttonTitleInsideAttachment;
-(NSString *)buttonTitleUnderFeedStory;
-(BOOL)showAfterInteraction;
-(void)setButtonTitleInsideAttachment:(NSString *)arg1 ;
-(void)setShowAfterInteraction:(BOOL)arg1 ;
-(void)setButtonTitleUnderFeedStory:(NSString *)arg1 ;
-(BOOL)promptUnderSocialPromptStory;
-(void)setPromptUnderSocialPromptStory:(BOOL)arg1 ;
@end

