/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBCancelable;
@class UILabel, NSString;

@interface MNAlbumTableViewCell : UITableViewCell {

	UILabel* _assetCountLabel;
	long long _assetCount;
	id<FBCancelable> _thumbnailFetchingRequest;
	NSString* _collectionIdentifier;

}

@property (nonatomic,retain) id<FBCancelable> thumbnailFetchingRequest;              //@synthesize thumbnailFetchingRequest=_thumbnailFetchingRequest - In the implementation block
@property (nonatomic,copy) NSString * collectionIdentifier;                          //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
-(id<FBCancelable>)thumbnailFetchingRequest;
-(void)setAssetCount:(long long)arg1 ;
-(void)setThumbnailFetchingRequest:(id<FBCancelable>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(void)setThumbnailImage:(id)arg1 ;
@end

