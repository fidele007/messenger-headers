/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString;


@protocol MQDataTextureModelProtocol <MQDataModelProtocol,MQTextureModelExports,MQTextureConvertible,MSQTextureModelProtocol>
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,copy) NSString * sourcePath; 
@property (nonatomic,copy) NSString * installID; 
@property (nonatomic,copy,readonly) NSString * fileHash; 
@required
-(NSString *)installID;
-(void)setInstallID:(id)arg1;
-(NSData *)data;
-(void)setData:(id)arg1;
-(NSString *)fileHash;
-(void)setSourcePath:(id)arg1;
-(NSString *)sourcePath;

@end

