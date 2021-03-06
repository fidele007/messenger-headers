/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNImportedContactCardViewListener.h>
#import <Messenger/MNContactImportDialogDismissalListener.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBImportedContactRemover;
@class MNCDNProfileImageDownloader, MNThreadParticipantNameFormatter, MNNavigationCoordinator, MNNewThreadNavigationCoordinator, MNConversationContact, MNContactImportDialogViewController, NSString;

@interface MNPeopleViewImportedContactCardPresenter : NSObject <MNImportedContactCardViewListener, MNContactImportDialogDismissalListener, FBClassProvidable> {

	MNCDNProfileImageDownloader* _profileImageDownloader;
	id<FBImportedContactRemover> _importedContactRemover;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNNavigationCoordinator* _navigationCoordinator;
	MNNewThreadNavigationCoordinator* _newThreadNavigationCoordinator;
	MNConversationContact* _conversationContact;
	MNContactImportDialogViewController* _viewController;

}

@property (nonatomic,retain) MNConversationContact * conversationContact;                       //@synthesize conversationContact=_conversationContact - In the implementation block
@property (nonatomic,retain) MNContactImportDialogViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)mainActionButtonTapped;
-(void)primaryAuxiliaryButtonTapped;
-(void)secondaryAuxiliaryButtonTapped;
-(void)contactImportDialogDismissed;
-(id)initWithNavigationCoordinator:(id)arg1 newThreadNavigationCoordinator:(id)arg2 profileImageDownloader:(id)arg3 importedContactRemover:(id)arg4 nameFormatter:(id)arg5 ;
-(void)setConversationContact:(MNConversationContact *)arg1 ;
-(void)presentContactCardForConversationContact:(id)arg1 ;
-(MNConversationContact *)conversationContact;
-(void)setViewController:(MNContactImportDialogViewController *)arg1 ;
-(MNContactImportDialogViewController *)viewController;
@end

