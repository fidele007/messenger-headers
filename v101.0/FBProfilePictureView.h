/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary, FBURLConnection, UIImageView;

@interface FBProfilePictureView : UIView {

	NSString* _profileID;
	unsigned long long _pictureCropping;
	NSDictionary* _currentImageQueryParams;
	FBURLConnection* _connection;
	UIImageView* _imageView;

}

@property (nonatomic,copy) NSDictionary * currentImageQueryParams;              //@synthesize currentImageQueryParams=_currentImageQueryParams - In the implementation block
@property (nonatomic,retain) FBURLConnection * connection;                      //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * profileID;                                //@synthesize profileID=_profileID - In the implementation block
@property (assign,nonatomic) unsigned long long pictureCropping;                //@synthesize pictureCropping=_pictureCropping - In the implementation block
-(void)setProfileID:(NSString *)arg1 ;
-(void)setPictureCropping:(unsigned long long)arg1 ;
-(unsigned long long)pictureCropping;
-(id)_generateQueryParams;
-(NSDictionary *)currentImageQueryParams;
-(void)ensureImageViewContentMode;
-(void)setCurrentImageQueryParams:(NSDictionary *)arg1 ;
-(void)refreshImage:(BOOL)arg1 ;
-(id)initWithProfileID:(id)arg1 pictureCropping:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)initialize;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(FBURLConnection *)connection;
-(void)setConnection:(FBURLConnection *)arg1 ;
-(NSString *)profileID;
-(id)_placeholderImage;
@end
