/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor, NSArray, FBTabBarItem;


@protocol FBTabBarProtocol
@property (nonatomic,readonly) UIColor * iconColor; 
@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,retain) FBTabBarItem * selectedItem; 
@property (assign,nonatomic,__weak) id<FBTabBarDelegate> delegate; 
@property (nonatomic,copy) NSArray * auxiliaryItems; 
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator; 
@optional
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id)arg1;
-(void)setAuxiliaryItems:(id)arg1;
-(NSArray *)auxiliaryItems;

@required
-(UIColor *)iconColor;
-(id)tabBarItemAtPoint:(CGPoint)arg1;
-(CGRect*)rectOfTabBarItem:(id)arg1;
-(BOOL)itemLabelsAreHidden;
-(void)setDelegate:(id)arg1;
-(id<FBTabBarDelegate>)delegate;
-(NSArray *)items;
-(void)setItems:(id)arg1;
-(void)setSelectedItem:(id)arg1;
-(FBTabBarItem *)selectedItem;

@end

