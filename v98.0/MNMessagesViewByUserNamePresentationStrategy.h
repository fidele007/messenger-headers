/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessagesViewPresentationStrategy.h>

@class FBMUserIdFromUsernameFetcher, MNMessagesViewByThreadQueryPresentationStrategy, MNMessagesViewController, NSString;

@interface MNMessagesViewByUserNamePresentationStrategy : NSObject <FBClassProvidable, MNMessagesViewPresentationStrategy> {

	FBMUserIdFromUsernameFetcher* _userNameFetcher;
	MNMessagesViewByThreadQueryPresentationStrategy* _presentationByDescriptorStrategy;
	BOOL _didFetchUserId;
	MNMessagesViewController* _messagesViewController;
	/*^block*/id _executePresentBlock;
	/*^block*/id _showLoadingBlock;
	/*^block*/id _presentationCompleteBlock;
	NSString* _otherUserName;
	NSString* _initialComposerExtensionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setupPresentationWithCanonicalThreadWithRecipientFbName:(id)arg1 withInitialComposerExtensionIdentifier:(id)arg2 ;
-(void)beginPresentationOfMessagesViewController:(id)arg1 withExecutePresentBlock:(/*^block*/id)arg2 showLoadingBlock:(/*^block*/id)arg3 presentationCompleteBlock:(/*^block*/id)arg4 ;
-(id)presentationFailedMessage;
-(id)initWithUserNameFetcher:(id)arg1 presentationByDescriptorStrategy:(id)arg2 ;
-(void)_startFetchingUserId;
-(void)_userNameToUserIdFetchCompleted:(id)arg1 ;
-(void)_handleErrorFetchingUserId;
-(void)cancel;
@end

