/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerTooltipPresenting <NSObject>
@required
-(void)shakeTooltipWithIdentifier:(id)arg1;
-(id)identifierForPresentedTooltip;
-(BOOL)presentTooltip:(id)arg1 identifier:(id)arg2 animated:(BOOL)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(BOOL)replaceTooltipWithIdentifiers:(id)arg1 withTooltip:(id)arg2 identifier:(id)arg3 animated:(BOOL)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6;
-(void)dismissTooltipWithIdentifier:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(id)presentedTooltip;

@end
