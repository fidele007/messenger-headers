/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerPrimaryExtension <NSObject,MNComposerExtension>
@property (nonatomic,retain) id<MNActionNuxPresenter> actionNuxPresenter; 
@property (nonatomic,readonly) BOOL autoFocusSearchBar; 
@property (nonatomic,copy,readonly) id longPressGestureHandler; 
@property (nonatomic,readonly) UIView*<MNComposerActionButton> primaryActionButton; 
@property (nonatomic,readonly) long long primaryExtensionType; 
@property (nonatomic,retain) id<MNComposerTooltipPresenting> tooltipPresenter; 
@required
-(long long)primaryExtensionType;
-(UIView*<MNComposerActionButton>)primaryActionButton;
-(void)didPresentMoreDrawer;
-(id<MNActionNuxPresenter>)actionNuxPresenter;
-(void)setActionNuxPresenter:(id)arg1;
-(BOOL)autoFocusSearchBar;
-(id)longPressGestureHandler;
-(id<MNComposerTooltipPresenting>)tooltipPresenter;
-(void)setTooltipPresenter:(id)arg1;

@end
