/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBInstantGameListUIMetrics, UIImageView, UILabel, NSString;

@interface FBInstantGameListGameTitleTagView : UIView {

	FBInstantGameListUIMetrics* _metrics;
	UIImageView* _backgroundView;
	UILabel* _tagLabel;
	NSString* _gameTagName;

}

@property (nonatomic,copy) NSString * gameTagName;              //@synthesize gameTagName=_gameTagName - In the implementation block
-(void)setGameTagName:(NSString *)arg1 ;
-(id)initWithTagName:(id)arg1 tintColor:(id)arg2 ;
-(NSString *)gameTagName;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTagName:(id)arg1 ;
@end

