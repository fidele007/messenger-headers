/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBGoodFriendsPlatformExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _isControlGroup;
	BOOL _replacePublisherBar;
	BOOL _hasStickyFeedSwitcher;
	BOOL _canShowPrompts;
	BOOL _hasStickyGoodFriendsFeed;
	BOOL _usesCustomComposer;
	BOOL _usesLightStyleSwitcher;
	NSString* _learnMoreUrlString;
	NSString* _customComposerTabs;

}

@property (nonatomic,readonly) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL isControlGroup;                             //@synthesize isControlGroup=_isControlGroup - In the implementation block
@property (nonatomic,readonly) BOOL replacePublisherBar;                        //@synthesize replacePublisherBar=_replacePublisherBar - In the implementation block
@property (nonatomic,readonly) BOOL hasStickyFeedSwitcher;                      //@synthesize hasStickyFeedSwitcher=_hasStickyFeedSwitcher - In the implementation block
@property (nonatomic,readonly) BOOL canShowPrompts;                             //@synthesize canShowPrompts=_canShowPrompts - In the implementation block
@property (nonatomic,readonly) BOOL hasStickyGoodFriendsFeed;                   //@synthesize hasStickyGoodFriendsFeed=_hasStickyGoodFriendsFeed - In the implementation block
@property (nonatomic,readonly) BOOL usesCustomComposer;                         //@synthesize usesCustomComposer=_usesCustomComposer - In the implementation block
@property (nonatomic,readonly) BOOL usesLightStyleSwitcher;                     //@synthesize usesLightStyleSwitcher=_usesLightStyleSwitcher - In the implementation block
@property (nonatomic,copy,readonly) NSString * learnMoreUrlString;              //@synthesize learnMoreUrlString=_learnMoreUrlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * customComposerTabs;              //@synthesize customComposerTabs=_customComposerTabs - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)isControlGroup;
-(BOOL)replacePublisherBar;
-(BOOL)hasStickyFeedSwitcher;
-(BOOL)canShowPrompts;
-(BOOL)hasStickyGoodFriendsFeed;
-(BOOL)usesCustomComposer;
-(BOOL)usesLightStyleSwitcher;
-(NSString *)learnMoreUrlString;
-(NSString *)customComposerTabs;
-(BOOL)enabled;
@end
