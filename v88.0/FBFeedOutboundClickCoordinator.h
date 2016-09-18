/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString, NSMutableDictionary;

@interface FBFeedOutboundClickCoordinator : NSObject {

	FBUserSession* _session;
	NSString* _mostRecentOutboundGraphQLID;
	double _mostRecentOutboundTimestamp;
	NSMutableDictionary* _listeners;
	int _source;
	BOOL _feedViewIsPresented;

}
-(void)followedOutboundClickWithGraphQLID:(id)arg1 source:(int)arg2 ;
-(void)feedViewDisappeared;
-(void)feedViewWillAppear;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
