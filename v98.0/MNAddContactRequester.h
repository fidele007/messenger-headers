/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNAddContactRequesterDelegate;
@class FBUserSession, FBSimpleNetworkerRequest, MNAddContactRequesterKey, NSString;

@interface MNAddContactRequester : NSObject <FBNetworkerRequestDelegate> {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _request;
	MNAddContactRequesterKey* _addContactRequesterKey;
	BOOL _addUnlessDeleted;
	id<MNAddContactRequesterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAddContactRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 addContactRequesterKey:(id)arg2 addUnlessDeleted:(BOOL)arg3 ;
-(void)setDelegate:(id<MNAddContactRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAddContactRequesterDelegate>)delegate;
-(void)send;
@end
