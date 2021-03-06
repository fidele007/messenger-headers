/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadGenericSnippetsLoading.h>

@protocol MNAuthenticationManager;
@class MNAppMessageAttachmentUtils, NSString;

@interface MNThreadStickerSnippetLoader : NSObject <MNThreadGenericSnippetsLoading> {

	id<MNAuthenticationManager> _authManager;
	MNAppMessageAttachmentUtils* _messageAttachmentUtils;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadThreadSnippetForThreadSummary:(id)arg1 latestSnippetMessage:(id)arg2 userIdToUserMap:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canGenerateSnippetForMessage:(id)arg1 ;
-(id)initWithAuthManager:(id)arg1 appMessageAttachmentUtils:(id)arg2 ;
@end

