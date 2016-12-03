/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray, FBMemMask3DAsset, FBFilterAsset;

@interface FBMediaCreativeToolMask : NSObject {

	NSString* _name;
	NSString* _className;
	NSURL* _thumbnailURL;
	NSArray* _assets;
	NSString* _maskId;
	NSArray* _faceRecognitionModels;
	FBMemMask3DAsset* _remoteZippedPackagedFile;

}

@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * className;                              //@synthesize className=_className - In the implementation block
@property (nonatomic,readonly) NSURL * thumbnailURL;                                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                  //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) BOOL isPackagedAsset; 
@property (nonatomic,readonly) FBFilterAsset * packagedAsset; 
@property (nonatomic,copy,readonly) NSString * maskId;                                 //@synthesize maskId=_maskId - In the implementation block
@property (nonatomic,copy) NSArray * faceRecognitionModels;                            //@synthesize faceRecognitionModels=_faceRecognitionModels - In the implementation block
@property (nonatomic,retain) FBMemMask3DAsset * remoteZippedPackagedFile;              //@synthesize remoteZippedPackagedFile=_remoteZippedPackagedFile - In the implementation block
-(id)initWithName:(id)arg1 className:(id)arg2 thumbnailImageURL:(id)arg3 assets:(id)arg4 maskId:(id)arg5 ;
-(void)setFaceRecognitionModels:(NSArray *)arg1 ;
-(NSString *)maskId;
-(BOOL)isPackagedAsset;
-(FBFilterAsset *)packagedAsset;
-(NSArray *)faceRecognitionModels;
-(void)setRemoteZippedPackagedFile:(FBMemMask3DAsset *)arg1 ;
-(FBMemMask3DAsset *)remoteZippedPackagedFile;
-(BOOL)empty;
-(NSString *)name;
-(NSString *)className;
-(NSURL *)thumbnailURL;
-(NSArray *)assets;
@end

