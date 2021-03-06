/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface FBRoundFaceModel : NSObject {

	NSURL* _faceURL;
	NSString* _name;

}

@property (nonatomic,retain) NSURL * faceURL;              //@synthesize faceURL=_faceURL - In the implementation block
@property (nonatomic,copy) NSString * name;                //@synthesize name=_name - In the implementation block
+(id)faceModelWithURL:(id)arg1 name:(id)arg2 ;
-(void)setFaceURL:(NSURL *)arg1 ;
-(NSURL *)faceURL;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
@end

