/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNativeArticlePreloadCoordinating.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableOrderedSet, NSObject, NSString;

@interface FBNativeArticlePreloadCoordinator : NSObject <FBNativeArticlePreloadCoordinating> {

	FBUserSession* _userSession;
	NSMutableOrderedSet* _configQueue;
	NSObject*<OS_dispatch_queue> _workingQueue;
	BOOL _preloadingEnabled;

}

@property (assign,nonatomic) BOOL preloadingEnabled;                //@synthesize preloadingEnabled=_preloadingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)setPreloadingEnabled:(BOOL)arg1 ;
-(void)preloadWithLoaderTarget:(id)arg1 ;
-(void)_cancelAllPreloads;
-(void)_fireAllPreloads;
-(BOOL)preloadingEnabled;
-(void)dealloc;
@end
