/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSuggestedContactsRetrieverDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNInviteCoefficientFetchStatusCheckerDelegate;
@class MNNonMessengerContactsRetriever, NSString;

@interface MNInviteCoefficientFetchStatusChecker : NSObject <MNSuggestedContactsRetrieverDelegate, FBClassProvidable> {

	MNNonMessengerContactsRetriever* _nonMessengerContactsRetriever;
	BOOL _inviteCoefficientFetchStatusCheckCompleted;
	id<MNInviteCoefficientFetchStatusCheckerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNInviteCoefficientFetchStatusCheckerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)suggestedContactsRetriever:(id)arg1 didRetrieveSuggestedContactsInSections:(id)arg2 sectionTitles:(id)arg3 sectionDetailItems:(id)arg4 sectionIndexTitles:(id)arg5 preselectedContacts:(id)arg6 ;
-(void)suggestedContactsRetrieverDidStartLoading:(id)arg1 ;
-(void)suggestedContactsRetrieverDidFinishLoading:(id)arg1 ;
-(id)initWithNonMessengerContactsRetriever:(id)arg1 ;
-(void)setDelegate:(id<MNInviteCoefficientFetchStatusCheckerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInviteCoefficientFetchStatusCheckerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

