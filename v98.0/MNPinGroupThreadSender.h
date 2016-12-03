/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPinGroupThreadSenderDelegate;
@class FBUserSession, NSString, UIImage, FBGraphBatchParticipatingRequest, FBGraphBatchRequest, FBSimpleNetworkerRequest, MNThreadStore, FBMUserFetchedListeningAnnouncer;

@interface MNPinGroupThreadSender : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBUserSession* _session;
	NSString* _threadFbId;
	NSString* _name;
	UIImage* _profileImage;
	FBGraphBatchParticipatingRequest* _setNameRequest;
	FBGraphBatchParticipatingRequest* _setProfileImageRequest;
	FBGraphBatchParticipatingRequest* _pinGroupRequest;
	FBGraphBatchRequest* _batchRequest;
	FBSimpleNetworkerRequest* _request;
	MNThreadStore* _threadStore;
	FBMUserFetchedListeningAnnouncer* _userFetchedAnnouncer;
	id<MNPinGroupThreadSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPinGroupThreadSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)_clearRequest;
-(double)_uploadTimeRatio;
-(void)_handleSetProfileImageResponse:(id)arg1 ;
-(void)pinThreadWithFbId:(id)arg1 name:(id)arg2 profileImage:(id)arg3 ;
-(id)initWithSession:(id)arg1 threadStore:(id)arg2 userFetchedAnnouncer:(id)arg3 ;
-(void)_prepareBatchRequest;
-(void)_prepareNetworkRequest;
-(BOOL)_handlePinGroupResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleSetNameResponse:(id)arg1 ;
-(void)_beginThreadStoreRequest;
-(void)_didSucceedWithThreadSummary:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNPinGroupThreadSenderDelegate>)arg1 ;
-(id<MNPinGroupThreadSenderDelegate>)delegate;
-(void)_didFailWithError:(id)arg1 ;
@end

