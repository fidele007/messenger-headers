/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAddContactRequesterDelegate.h>
#import <Messenger/MNContactProfileFetcherDelegate.h>

@protocol MNAddContactOperationDelegate;
@class FBUserSession, MNAddContactRequester, MNAddContactRequesterKey, MNContactProfileFetcher, NSString, FBSyncPerson;

@interface MNAddContactOperation : NSObject <MNAddContactRequesterDelegate, MNContactProfileFetcherDelegate> {

	FBUserSession* _session;
	MNAddContactRequester* _addContactRequester;
	MNAddContactRequesterKey* _addContactRequesterKey;
	MNContactProfileFetcher* _contactProfileFetcher;
	unsigned long long _state;
	NSString* _contactId;
	NSString* _contactWriteId;
	FBSyncPerson* _contactProfile;
	BOOL _addUnlessDeleted;
	id<MNAddContactOperationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAddContactOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 addContactRequesterKey:(id)arg2 addUnlessDeleted:(BOOL)arg3 ;
-(void)_finishWithResult;
-(void)addContactRequester:(id)arg1 didAddContact:(id)arg2 ;
-(void)addContactRequester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)contactProfileFetcher:(id)arg1 didFetchContact:(id)arg2 writeId:(id)arg3 ;
-(void)contactProfileFetcherDidNotFindProfile:(id)arg1 writeId:(id)arg2 ;
-(void)contactProfileFetcher:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 addContactRequesterKey:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNAddContactOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<MNAddContactOperationDelegate>)delegate;
-(void)start;
@end

