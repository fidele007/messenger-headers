/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSURL, NSDate, NSError;

@interface FBWebImageDownloadResponse : NSObject {

	BOOL _isCached;
	UIImage* _image;
	NSURL* _url;
	unsigned long long _imageFlag;
	id _logicalIdentifier;
	double _progress;
	NSDate* _expiryDate;
	NSError* _error;

}

@property (nonatomic,copy,readonly) UIImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                          //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;              //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) id logicalIdentifier;                      //@synthesize logicalIdentifier=_logicalIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isLast; 
@property (nonatomic,readonly) double progress;                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCached;                             //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expiryDate;                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
-(id)logicalIdentifier;
-(BOOL)isLast;
-(id)initWithImage:(id)arg1 url:(id)arg2 imageFlag:(unsigned long long)arg3 logicalIdentifier:(id)arg4 isLast:(BOOL)arg5 isCached:(BOOL)arg6 error:(id)arg7 ;
-(unsigned long long)imageFlag;
-(id)initWithImage:(id)arg1 url:(id)arg2 imageFlag:(unsigned long long)arg3 logicalIdentifier:(id)arg4 progress:(double)arg5 isCached:(BOOL)arg6 error:(id)arg7 ;
-(id)initWithImage:(id)arg1 url:(id)arg2 imageFlag:(unsigned long long)arg3 logicalIdentifier:(id)arg4 progress:(double)arg5 isCached:(BOOL)arg6 expiryDate:(id)arg7 error:(id)arg8 ;
-(NSDate *)expiryDate;
-(id)description;
-(NSURL *)url;
-(UIImage *)image;
-(double)progress;
-(BOOL)isCached;
-(NSError *)error;
@end
