/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/MNGroupsPresenceCacheLookup.h>

@protocol MNGroupsMembersPresenceCollectionListener, OS_dispatch_queue;
@class NSMutableDictionary, FBTimeThrottler, NSObject, NSString;

@interface MNGroupsMembersPresenceValueCollection : NSObject <MNPresenceUpdateListening, MNGroupsPresenceCacheLookup> {

	NSMutableDictionary* _presenceCollection;
	FBTimeThrottler* _timeThrottler;
	id<MNGroupsMembersPresenceCollectionListener> _listener;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(id)allActiveMemberIds;
-(void)_notifyListener;
-(BOOL)isMemberActive:(id)arg1 ;
-(id)initWithQueue:(id)arg1 listener:(id)arg2 ;
@end
