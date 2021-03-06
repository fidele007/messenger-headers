/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPublishingRequestSender.h>

@protocol FBPublishingRequestSenderDelegate;
@class FBUserSession, FBGraphQLMutationHandle, NSString;

@interface FBComposerStoryCreateMutationRequestSender : NSObject <FBPublishingRequestSender> {

	FBUserSession* _session;
	unsigned long long _mediaType;
	/*^block*/id _responseParsingBlock;
	FBGraphQLMutationHandle* _handle;
	id<FBPublishingRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublishingRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupOutstandingRequests;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 responseParsingBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end

