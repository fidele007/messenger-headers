/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNLocalPhotoInfo, NSData;

@interface MNPhotoUploadInfo : FBValueObject <NSCopying> {

	NSString* _key;
	double _width;
	double _height;
	MNLocalPhotoInfo* _localPhotoInfo;
	NSData* _imageData;
	NSString* _parentMessageOfflineThreadingId;

}

@property (nonatomic,copy,readonly) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) double width;                                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                                //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) MNLocalPhotoInfo * localPhotoInfo;                       //@synthesize localPhotoInfo=_localPhotoInfo - In the implementation block
@property (nonatomic,copy,readonly) NSData * imageData;                                      //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentMessageOfflineThreadingId;              //@synthesize parentMessageOfflineThreadingId=_parentMessageOfflineThreadingId - In the implementation block
-(MNLocalPhotoInfo *)localPhotoInfo;
-(id)initWithKey:(id)arg1 width:(double)arg2 height:(double)arg3 localPhotoInfo:(id)arg4 imageData:(id)arg5 parentMessageOfflineThreadingId:(id)arg6 ;
-(NSString *)parentMessageOfflineThreadingId;
-(NSString *)key;
-(double)width;
-(double)height;
-(NSData *)imageData;
@end
