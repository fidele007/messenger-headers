/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBMediaCreativeToolsBaseViewCellProtocol.h>

@class FBMediaCreativeToolsEffectCellModel, NSString;

@interface FBMediaCreativeToolsEffectBaseCell : UICollectionViewCell <FBMediaCreativeToolsBaseViewCellProtocol> {

	BOOL _isAnimatingTouchesBegan;
	BOOL _didTouchesEnd;
	FBMediaCreativeToolsEffectCellModel* _cellModel;

}

@property (nonatomic,readonly) FBMediaCreativeToolsEffectCellModel * cellModel;              //@synthesize cellModel=_cellModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithCellModel:(id)arg1 ;
-(FBMediaCreativeToolsEffectCellModel *)cellModel;
-(void)_animateTouchesEnded;
-(void)_didFinishTouches;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
@end

