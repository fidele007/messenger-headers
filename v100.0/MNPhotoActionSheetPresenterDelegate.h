/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

