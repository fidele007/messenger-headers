/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIRefreshControl.h>

@class NSString;

@interface RCTRefreshControl : UIRefreshControl {

	BOOL _isInitialRender;
	BOOL _currentRefreshingState;
	/*^block*/id _onRefresh;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) id onRefresh;                  //@synthesize onRefresh=_onRefresh - In the implementation block
-(void)refreshControlValueChanged;
-(id)onRefresh;
-(void)setOnRefresh:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)setTitleColor:(id)arg1 ;
-(void)setRefreshing:(BOOL)arg1 ;
@end

