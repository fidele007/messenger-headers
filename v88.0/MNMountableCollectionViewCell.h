/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNProfilePreviewing.h>
#import <Messenger/MNStickerPreviewing.h>
#import <Messenger/MNThreadPreviewing.h>
#import <Messenger/MNVideoPreviewing.h>

@class UIView, NSString;

@interface MNMountableCollectionViewCell : UICollectionViewCell <MNPhotoPreviewing, MNProfilePreviewing, MNStickerPreviewing, MNThreadPreviewing, MNVideoPreviewing> {

	BOOL _disablesAnimation;
	UIView* _mountedView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * mountedView;                  //@synthesize mountedView=_mountedView - In the implementation block
@property (assign,nonatomic) BOOL disablesAnimation;                //@synthesize disablesAnimation=_disablesAnimation - In the implementation block
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableStickerAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableThreadAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(UIView *)mountedView;
-(void)setMountedView:(UIView *)arg1 ;
-(id)previewableVideoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setDisablesAnimation:(BOOL)arg1 ;
-(BOOL)disablesAnimation;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

