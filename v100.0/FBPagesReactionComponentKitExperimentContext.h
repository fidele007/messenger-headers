/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBPagesReactionComponentKitExperimentContext : FBExperimentContext {

	BOOL _iosPageHome;
	BOOL _useComponentkit;
	BOOL _iosPagePosts;

}

@property (assign,nonatomic) BOOL iosPageHome;                  //@synthesize iosPageHome=_iosPageHome - In the implementation block
@property (assign,nonatomic) BOOL useComponentkit;              //@synthesize useComponentkit=_useComponentkit - In the implementation block
@property (assign,nonatomic) BOOL iosPagePosts;                 //@synthesize iosPagePosts=_iosPagePosts - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)iosPageHome;
-(BOOL)iosPagePosts;
-(BOOL)useComponentkit;
-(void)setIosPageHome:(BOOL)arg1 ;
-(void)setUseComponentkit:(BOOL)arg1 ;
-(void)setIosPagePosts:(BOOL)arg1 ;
@end

