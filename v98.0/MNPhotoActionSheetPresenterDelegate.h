/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPhotoActionSheetPresenterDelegate <NSObject>
@optional
-(void)photoActionSheetPresenterDidSelectCancel:(id)arg1;

@required
-(BOOL)photoActionSheetPresenterCanForward:(id)arg1;
-(BOOL)photoActionSheetPresenterCanSave:(id)arg1;
-(BOOL)photoActionSheetPresenterCanShare:(id)arg1;
-(void)photoActionSheetPresenterDidSelectForward:(id)arg1;
-(void)photoActionSheetPresenterDidSelectShare:(id)arg1 sourceView:(id)arg2;
-(void)photoActionSheetPresenterDidSelectSave:(id)arg1;

@end

