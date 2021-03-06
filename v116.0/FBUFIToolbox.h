/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBUserSession, NSString, FBScenePath, FBFontFoundry, FBFeedCustomizationSet, UITraitCollection;

@interface FBUFIToolbox : NSObject <NSCopying> {

	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	unsigned long long _layoutIdiom;
	NSString* _analyticsModule;
	FBScenePath* _scenePath;
	FBFontFoundry* _fontFoundry;
	FBFeedCustomizationSet* _feedCustomizationSet;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                 //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) FBScenePath * scenePath;                                   //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBFontFoundry * fontFoundry;                                    //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (nonatomic,readonly) FBFeedCustomizationSet * feedCustomizationSet;                  //@synthesize feedCustomizationSet=_feedCustomizationSet - In the implementation block
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection;                       //@synthesize traitCollection=_traitCollection - In the implementation block
+(id)newWithSession:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 layoutIdiom:(unsigned long long)arg4 analyticsModule:(id)arg5 scenePath:(id)arg6 fontFoundry:(id)arg7 feedCustomizationSet:(id)arg8 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(unsigned long long)layoutIdiom;
-(FBFeedCustomizationSet *)feedCustomizationSet;
-(FBFontFoundry *)fontFoundry;
-(NSString *)analyticsModule;
-(FBScenePath *)scenePath;
-(UITraitCollection *)traitCollection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBUserSession *)session;
@end

