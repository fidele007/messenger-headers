/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager;
@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface MNActiveParticipantSet : NSObject <FBViewerContextClassProvidable> {

	NSMutableOrderedSet* _activeUserIds;
	NSMutableSet* _observers;
	id<MNAuthenticationManager> _authManager;
	long long cacheSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithAuthenticationManager:(id)arg1 userSession:(id)arg2 ;
-(void)addUsersWithIds:(id)arg1 ;
-(void)addActiveParticipantObserver:(id)arg1 ;
-(BOOL)removeActiveParticipantObserver:(id)arg1 ;
-(id)activeUserIds;
@end

