/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAvatarImageDecorating;
@class MNProfileImageViewController, FBImageDownloader, NSString;

@interface MNConversationStartersController : NSObject <FBClassProvidable> {

	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	FBImageDownloader* _imageDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithProfileImageViewController:(id)arg1 avatarImageDecoration:(id)arg2 imageDownloader:(id)arg3 ;
-(void)_logDataForEvent:(id)arg1 viewModel:(id)arg2 ;
-(void)_logDataForEvent:(id)arg1 extraData:(id)arg2 ;
-(void)setUpConversationStartersView:(id)arg1 withConversationStarter:(id)arg2 ;
-(void)conversationStarterDidAppear:(id)arg1 ;
-(void)conversationStarterDidTap:(id)arg1 ;
-(void)conversationStarterHeaderDidTapExpandWithViewModel:(id)arg1 ;
-(void)conversationStarterHeaderDidTapCollapseWithViewModel:(id)arg1 ;
@end

