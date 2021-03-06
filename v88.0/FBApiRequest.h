/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface FBApiRequest : NSObject {

	NSString* _friendlyName;
	NSString* _method;
	NSString* _relativeUrl;
	NSString* _body;
	NSString* _dependsOn;
	NSMutableArray* _attachFiles;

}

@property (nonatomic,retain) NSMutableArray * attachFiles;              //@synthesize attachFiles=_attachFiles - In the implementation block
@property (nonatomic,readonly) NSString * friendlyName;                 //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,readonly) NSString * method;                       //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) NSString * relativeUrl;                  //@synthesize relativeUrl=_relativeUrl - In the implementation block
@property (nonatomic,readonly) NSString * body;                         //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSString * dependsOn;                    //@synthesize dependsOn=_dependsOn - In the implementation block
-(BOOL)isTypeString:(id)arg1 ;
-(id)initWithName:(id)arg1 method:(id)arg2 relativeUrl:(id)arg3 body:(id)arg4 ;
-(void)addAttachFile:(id)arg1 ;
-(void)addAttachDictionary:(id)arg1 ;
-(void)setDependsOn:(NSString *)arg1 ;
-(NSString *)relativeUrl;
-(NSString *)dependsOn;
-(NSMutableArray *)attachFiles;
-(void)setAttachFiles:(NSMutableArray *)arg1 ;
-(NSString *)friendlyName;
-(void)dealloc;
-(NSString *)body;
-(NSString *)method;
-(id)toDictionary;
@end

