/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNSaveMessageOutboundClickCoordinatorDelegate;
@class FBUserSession, FBMMessageKey, NSMutableDictionary, NSString;

@interface MNSaveMessageOutboundClickCoordinator : NSObject <FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBMMessageKey* _mostRecentOutboundMessageKey;
	double _mostRecentOutboundMillisecondTimestamp;
	NSMutableDictionary* _listeners;
	int _source;
	id<MNSaveMessageOutboundClickCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSaveMessageOutboundClickCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)followedOutboundClickWithMessageKey:(id)arg1 source:(int)arg2 ;
-(void)returnedFromOutboundSource;
-(void)setDelegate:(id<MNSaveMessageOutboundClickCoordinatorDelegate>)arg1 ;
-(id<MNSaveMessageOutboundClickCoordinatorDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
