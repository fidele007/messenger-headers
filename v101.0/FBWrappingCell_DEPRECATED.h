/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView;

@interface FBWrappingCell_DEPRECATED : UITableViewCell {

	BOOL _shouldHighlightOnTap;
	UIView* _wrappedView;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,retain) UIView * wrappedView;                   //@synthesize wrappedView=_wrappedView - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightOnTap;              //@synthesize shouldHighlightOnTap=_shouldHighlightOnTap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setShouldHighlightOnTap:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 wrappedView:(id)arg3 ;
-(id)initWithView:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)shouldHighlightOnTap;
-(void)layoutSubviews;
-(UIView *)wrappedView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setWrappedView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)prepareForReuse;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
