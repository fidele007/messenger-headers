/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary;


@protocol MNMediaCollectionFetching <NSObject>
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * mediaCollection; 
@property (nonatomic,copy,readonly) NSDictionary * stickerSizeByFbId; 
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@required
-(NSDictionary *)stickerSizeByFbId;
-(BOOL)needsRefetch;
-(void)fetchCollection;
-(void)cancel;
-(void)setDelegate:(id)arg1;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;

@end

