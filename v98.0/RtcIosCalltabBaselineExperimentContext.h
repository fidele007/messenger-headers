/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface RtcIosCalltabBaselineExperimentContext : FBExperimentContext {

	long long _tapSuggestedAction;
	BOOL _hideCallFromPeopleTab;
	long long _tapSearchAction;
	BOOL _removeRedundantBadging;

}

@property (assign,nonatomic) long long tapSuggestedAction;              //@synthesize tapSuggestedAction=_tapSuggestedAction - In the implementation block
@property (assign,nonatomic) BOOL hideCallFromPeopleTab;                //@synthesize hideCallFromPeopleTab=_hideCallFromPeopleTab - In the implementation block
@property (assign,nonatomic) long long tapSearchAction;                 //@synthesize tapSearchAction=_tapSearchAction - In the implementation block
@property (assign,nonatomic) BOOL removeRedundantBadging;               //@synthesize removeRedundantBadging=_removeRedundantBadging - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)hideCallFromPeopleTab;
-(BOOL)removeRedundantBadging;
-(long long)tapSearchAction;
-(long long)tapSuggestedAction;
-(void)setRemoveRedundantBadging:(BOOL)arg1 ;
-(void)setTapSuggestedAction:(long long)arg1 ;
-(void)setHideCallFromPeopleTab:(BOOL)arg1 ;
-(void)setTapSearchAction:(long long)arg1 ;
@end
