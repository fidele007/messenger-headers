/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MNThreadCollectionViewModel;


@protocol MNThreadCollectionControlling <NSObject>
@property (assign,nonatomic,__weak) id<MNThreadCollectionControllerDelegate> delegate; 
@property (nonatomic,copy) MNThreadCollectionViewModel * viewModel; 
@required
+(double)heightForViewModel:(id)arg1;
-(void)threadCollectionControllerWillAppear;
-(void)threadCollectionControllerDidDisappear;
-(void)scrollToBeginningAnimated:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<MNThreadCollectionControllerDelegate>)delegate;
-(id)view;
-(MNThreadCollectionViewModel *)viewModel;
-(void)setViewModel:(id)arg1;

@end

