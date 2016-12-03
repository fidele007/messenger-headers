/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNAttachmentStyleViewModelCreator.h>

@class NSString;

@interface MNCommerceOrderReceiptViewModelFactory : NSObject <FBViewerContextClassProvidable, MNAttachmentStyleViewModelCreator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewModelForAttachment:(id)arg1 message:(id)arg2 ;
-(id)viewModelForDemo;
-(id)_viewModelFromRetailReceipt:(id)arg1 withStyle:(id)arg2 senderID:(id)arg3 ;
-(id)_viewModelFromRetailCancellation:(id)arg1 withStyle:(id)arg2 senderID:(id)arg3 ;
-(id)viewModelForDemoWithMessageType:(unsigned long long)arg1 itemCount:(long long)arg2 ;
-(id)_commerceHeaderViewModelWithMessageType:(unsigned long long)arg1 itemCount:(long long)arg2 companyLogo:(id)arg3 merchantName:(id)arg4 ;
-(id)_footerViewModelWithMessageType:(unsigned long long)arg1 footerText:(id)arg2 ;
@end
