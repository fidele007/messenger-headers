/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsSettingsSectionExtension <FBPaymentsSettingsExtensionPreviewingHandler,FBPaymentsTableViewSection>
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalWebFlowDelegate; 
@optional
-(id)sectionFooterViewModel;
-(id)rightAccessoryViewForSectionHeader;

@required
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1;
-(void)commitEditingStyle:(long long)arg1 forRowAtRowIndex:(unsigned long long)arg2;
-(id)titleForDeleteConfirmationButtonForRowAtIndex:(unsigned long long)arg1;
-(unsigned long long)interestedDataTypes;
-(id<FBModalWebFlowDelegate>)modalWebFlowDelegate;
-(void)setModalWebFlowDelegate:(id)arg1;
-(void)tearDown;
-(long long)editingStyleForRowAtIndex:(unsigned long long)arg1;

@end

