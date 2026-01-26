// CkAi.h: interface for the CkAi class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat 11.3.0

#define _CkVersion 11.3.0

#ifndef _CkAi_H
#define _CkAi_H
	
#include "chilkatDefs.h"
#include "CkString.h"
#include "CkClassWithCallbacks.h"

class CkTask;
class CkJsonObject;
class CkStringTable;
class CkStringBuilder;
class CkBinData;
class CkSocket;
class CkBaseProgress;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif


#undef Copy

// CLASS: CkAi
class CK_VISIBLE_PUBLIC CkAi  : public CkClassWithCallbacks
{
    private:

	// Don't allow assignment or copying these objects.
	CkAi(const CkAi &);
	CkAi &operator=(const CkAi &);

    public:
	CkAi(void);
	virtual ~CkAi(void);

	static CkAi *createNew(void);
	static CkAi *createNew2(int progLang);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	
		
	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// This is the API key used for authentication. Use your API key that matches your
	// Provider .
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// 1: #Provider
	void get_ApiKey(CkString &str);
	// This is the API key used for authentication. Use your API key that matches your
	// Provider .
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// 1: #Provider
	const char *apiKey(void);
	// This is the API key used for authentication. Use your API key that matches your
	// Provider .
	// 
	// Suggestion: Use Chilkat's Secrets class to store and retrieve API keys in any of
	// the following locations.
	//     * Windows Credentials Manager
	//     * Apple Keychain
	//     * AWS Secrets Manager
	//     * Azure Key Vault
	//     * IBM Cloud Secrets Manager
	//     * Oracle Cloud Secrets
	//     * Doppler Secrets
	// 
	// 
	// References:
	// 1: #Provider
	void put_ApiKey(const char *newVal);

	// For custom Provider 's, use this field name for the API key in the HTTP header,
	// but only if the API key is to be placed in a custom header field. If the API key
	// is to be provided in an "Authorization: Bearer" header, then leave this property
	// empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// 1: #Provider
	void get_ApiKeyHeader(CkString &str);
	// For custom Provider 's, use this field name for the API key in the HTTP header,
	// but only if the API key is to be placed in a custom header field. If the API key
	// is to be provided in an "Authorization: Bearer" header, then leave this property
	// empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// 1: #Provider
	const char *apiKeyHeader(void);
	// For custom Provider 's, use this field name for the API key in the HTTP header,
	// but only if the API key is to be placed in a custom header field. If the API key
	// is to be provided in an "Authorization: Bearer" header, then leave this property
	// empty.
	// 
	// The default value of this property is the empty string.
	// 
	// 
	// References:
	// 1: #Provider
	void put_ApiKeyHeader(const char *newVal);

	// Specifies the API specification to be used. Possible choices are ChatCompletions
	// , Responses , Gemini , Anthropic . The default value is Responses because the
	// default value of the Provider property is openai . Setting the Provider property
	// to a value other than custom will also automatically set this property to the
	// correct and needed value.
	// 
	// References:
	// 1: #Provider
	void get_ApiSpec(CkString &str);
	// Specifies the API specification to be used. Possible choices are ChatCompletions
	// , Responses , Gemini , Anthropic . The default value is Responses because the
	// default value of the Provider property is openai . Setting the Provider property
	// to a value other than custom will also automatically set this property to the
	// correct and needed value.
	// 
	// References:
	// 1: #Provider
	const char *apiSpec(void);
	// Specifies the API specification to be used. Possible choices are ChatCompletions
	// , Responses , Gemini , Anthropic . The default value is Responses because the
	// default value of the Provider property is openai . Setting the Provider property
	// to a value other than custom will also automatically set this property to the
	// correct and needed value.
	// 
	// References:
	// 1: #Provider
	void put_ApiSpec(const char *newVal);

	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1 . The default value is https://api.openai.com/v1
	// because the default value of the Provider property is openai . Setting the
	// Provider property to a value other than custom will also automatically set this
	// property to the correct and needed value.
	// 
	// References:
	// 1: #Provider
	void get_BaseUrl(CkString &str);
	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1 . The default value is https://api.openai.com/v1
	// because the default value of the Provider property is openai . Setting the
	// Provider property to a value other than custom will also automatically set this
	// property to the correct and needed value.
	// 
	// References:
	// 1: #Provider
	const char *baseUrl(void);
	// Specifies the provider's base URL. For example, http://localhost:11434/v1 or
	// https://api.together.xyz/v1 . The default value is https://api.openai.com/v1
	// because the default value of the Provider property is openai . Setting the
	// Provider property to a value other than custom will also automatically set this
	// property to the correct and needed value.
	// 
	// References:
	// 1: #Provider
	void put_BaseUrl(const char *newVal);

	// For multimodal inputs like image data, image URLs, file data, and file URLs, the
	// full data or URL is sent initially. If the property is set to true, the full
	// data/URL is re-sent in subsequent interactions. If set to false, only the
	// image or file summary is sent thereafter.
	// 
	// By default, this property is false.
	// 
	// Full transcript style: always send the entire conversation (including
	// files/images). This guarantees the model has all context, but can get expensive.
	// 
	// Summarized transcript style: for previously sent multimodal items, sends the
	// summary message (e.g. “Earlier, I uploaded a PDF with account statements”)
	// instead of the raw file or url itself.
	// 
	bool get_FullTranscript(void);
	// For multimodal inputs like image data, image URLs, file data, and file URLs, the
	// full data or URL is sent initially. If the property is set to true, the full
	// data/URL is re-sent in subsequent interactions. If set to false, only the
	// image or file summary is sent thereafter.
	// 
	// By default, this property is false.
	// 
	// Full transcript style: always send the entire conversation (including
	// files/images). This guarantees the model has all context, but can get expensive.
	// 
	// Summarized transcript style: for previously sent multimodal items, sends the
	// summary message (e.g. “Earlier, I uploaded a PDF with account statements”)
	// instead of the raw file or url itself.
	// 
	void put_FullTranscript(bool newVal);

	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// 1: #AbortCheck
	int get_HeartbeatMs(void);
	// The interval in milliseconds between each AbortCheck event callback, which
	// enables an application to abort certain method calls before they complete. By
	// default, HeartbeatMs is set to 0 , meaning no AbortCheck event callbacks will
	// trigger.
	// 
	// References:
	// 1: #AbortCheck
	void put_HeartbeatMs(int newVal);

	// This applies to providers like OpenAI that can maintain conversation state on
	// the server. If set to true, only the conversation ID is sent with each query.
	// If set to false, the entire conversation transcript is sent with each query,
	// making each query stateless.
	// 
	// This only applies if a conversation is selected.
	// 
	// The default value of this property is false.
	// 
	bool get_HostedConvo(void);
	// This applies to providers like OpenAI that can maintain conversation state on
	// the server. If set to true, only the conversation ID is sent with each query.
	// If set to false, the entire conversation transcript is sent with each query,
	// making each query stateless.
	// 
	// This only applies if a conversation is selected.
	// 
	// The default value of this property is false.
	// 
	void put_HostedConvo(bool newVal);

	// The maximum amount of time to wait for additional incoming data when receiving a
	// response. The default value is 90000 (90 seconds). This is not a total timeout,
	// but the maximum time allowed when data transmission has paused.
	int get_IdleTimeoutMs(void);
	// The maximum amount of time to wait for additional incoming data when receiving a
	// response. The default value is 90000 (90 seconds). This is not a total timeout,
	// but the maximum time allowed when data transmission has paused.
	void put_IdleTimeoutMs(int newVal);

	// The model to be used for AI conversations. For example, GPT-4o or GPT-5 . The
	// list of available models can be obtained by calling GetModels .
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// 1: #GetModels
	void get_Model(CkString &str);
	// The model to be used for AI conversations. For example, GPT-4o or GPT-5 . The
	// list of available models can be obtained by calling GetModels .
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// 1: #GetModels
	const char *model(void);
	// The model to be used for AI conversations. For example, GPT-4o or GPT-5 . The
	// list of available models can be obtained by calling GetModels .
	// 
	// The default value is the empty string. A model must always be specified. Chilkat
	// won't try to guess or default to a model.
	// 
	// 
	// References:
	// 1: #GetModels
	void put_Model(const char *newVal);

	// This is the AI provider. Possible values are: openai , google , claude ,
	// deepseek , perplexity , and xai .
	// 
	// Starting in Chilkat v11.3.0 , this property can be set to custom , and the
	// BaseUrl and ApiSpec properties can also be set to fully specify the provider.
	// 
	// The default value is openai .
	// 
	// 
	// References:
	// 1: #BaseUrl
	// 2: #ApiSpec
	void get_Provider(CkString &str);
	// This is the AI provider. Possible values are: openai , google , claude ,
	// deepseek , perplexity , and xai .
	// 
	// Starting in Chilkat v11.3.0 , this property can be set to custom , and the
	// BaseUrl and ApiSpec properties can also be set to fully specify the provider.
	// 
	// The default value is openai .
	// 
	// 
	// References:
	// 1: #BaseUrl
	// 2: #ApiSpec
	const char *provider(void);
	// This is the AI provider. Possible values are: openai , google , claude ,
	// deepseek , perplexity , and xai .
	// 
	// Starting in Chilkat v11.3.0 , this property can be set to custom , and the
	// BaseUrl and ApiSpec properties can also be set to fully specify the provider.
	// 
	// The default value is openai .
	// 
	// 
	// References:
	// 1: #BaseUrl
	// 2: #ApiSpec
	void put_Provider(const char *newVal);

	// The HTTP response status code for the last Ask is as follows:
	//     * 0 indicates an error occurred before receiving an HTTP response.
	//     * 200 indicates a successful response.
	//     * A failed response has a status code of 400 or higher.
	// 
	// References:
	// 1: #Ask
	int get_ResponseStatusCode(void);

	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	void get_SelectedConvo(CkString &str);
	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	const char *selectedConvo(void);
	// The currently selected conversation can be set to your desired conversation
	// name. Once set, all future queries will be part of that conversation, updating
	// its state with each input and output. By default, no conversation is selected,
	// indicated by an empty string, leading to stateless queries. The first
	// conversation created or imported will be automatically selected. If you attempt
	// to select a non-existent conversation, the selection will not change. You can
	// reset this property to an empty string to revert to stateless querying.
	void put_SelectedConvo(const char *newVal);

	// When set to true, the Ask method operates in streaming mode, returning
	// immediately after the request is sent. You can then use the PollAi and
	// NextAiEvent methods to receive streaming events. By default, this property is
	// false.
	// 
	// References:
	// 1: #Ask
	bool get_Streaming(void);
	// When set to true, the Ask method operates in streaming mode, returning
	// immediately after the request is sent. You can then use the PollAi and
	// NextAiEvent methods to receive streaming events. By default, this property is
	// false.
	// 
	// References:
	// 1: #Ask
	void put_Streaming(bool newVal);

	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void get_UncommonOptions(CkString &str);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	const char *uncommonOptions(void);
	// This is a catch-all property to be used for uncommon needs. This property
	// defaults to the empty string, and should typically remain empty.
	void put_UncommonOptions(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Sends the current potentially multimodal input within the context of the
	// selected conversation and receives the model's output. Currently, the desired
	// outputType can only be text . Future versions of Chilkat will support image , audio ,
	// or a JSON schema to tell the model to return data in the specified JSON
	// structured output.
	// 
	// Accumulated outputs are cleared on entry to this method. Accumulated inputs are
	// cleared on the successful return of this method.
	// 
	// This method cannot be called while a streaming Ask is in progress. In such a
	// case the return value is false and nothing will occur.
	// 
	bool Ask(const char *outputType);

	// Sends the current potentially multimodal input within the context of the
	// selected conversation and receives the model's output. Currently, the desired
	// outputType can only be text . Future versions of Chilkat will support image , audio ,
	// or a JSON schema to tell the model to return data in the specified JSON
	// structured output.
	// 
	// Accumulated outputs are cleared on entry to this method. Accumulated inputs are
	// cleared on the successful return of this method.
	// 
	// This method cannot be called while a streaming Ask is in progress. In such a
	// case the return value is false and nothing will occur.
	// 
	CkTask *AskAsync(const char *outputType);


	// Deletes the conversation by its name. If name equals * then all conversations
	// are deleted.
	bool DeleteConvo(const char *name);


	// Exports the conversation specified by name to json, replacing json's contents
	// with the exported transcript. You can later import a conversation using
	// ImportConvo . The currently selected conversation can be exported by passing *
	// for the name.
	// 
	// References:
	// 1: #ImportConvo
	bool ExportConvo(const char *name, CkJsonObject &json);


	// Provides details about the last method called on this object instance. While
	// many methods do not generate information, some allow you to retrieve details by
	// accessing the last JSON data immediately after the method call returns.
	// 
	// Methods that produce last JSON information include: GetModels .
	// 
	// 
	// References:
	// 1: #GetModels
	void GetLastJsonData(CkJsonObject &json);


	// Returns a list of models available to your account, such as GPT-4o and GPT-5 .
	// The models are listed in st, sorted in ascending, case-insensitive order. To
	// access the raw JSON response after calling this method, use GetLastJsonData .
	// 
	// References:
	// 1: #GetLastJsonData
	bool GetModels(CkStringTable &st);

	// Returns a list of models available to your account, such as GPT-4o and GPT-5 .
	// The models are listed in st, sorted in ascending, case-insensitive order. To
	// access the raw JSON response after calling this method, use GetLastJsonData .
	// 
	// References:
	// 1: #GetLastJsonData
	CkTask *GetModelsAsync(CkStringTable &st);


	// Returns the text output from the last call to Ask .
	// 
	// References:
	// 1: #Ask
	bool GetOutputText(CkString &outStr);

	// Returns the text output from the last call to Ask .
	// 
	// References:
	// 1: #Ask
	const char *getOutputText(void);
	// Returns the text output from the last call to Ask .
	// 
	// References:
	// 1: #Ask
	const char *outputText(void);


	// Returns the text output, appended to sb, from the last call to Ask .
	// 
	// References:
	// 1: #Ask
	bool GetOutputTextSb(CkStringBuilder &sb);


	// Imports the conversation from json and assigns it the name in name.
	bool ImportConvo(const char *name, CkJsonObject &json);


	// Adds file data, such as a PDF, to the potentially multimodal input that will be
	// sent in the next call to Ask . The bd contains the file data.
	// 
	// If FullTranscript is _CKFALSE_, summary is sent in subsequent interactions instead
	// of the file data. If FullTranscript is true, summary is not sent, and the file
	// data is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek .
	// 
	// 
	// References:
	// 1: #Ask
	// 2: #FullTranscript
	bool InputAddFileData(const char *filename, CkBinData &bd, const char *summary);


	// Adds a file located at a url to the potentially multimodal input that will be
	// sent in the next call to Ask .
	// 
	// If FullTranscript is _CKFALSE_, summary is sent in subsequent interactions instead
	// of the file URL. If FullTranscript is true, summary is not sent, and the file URL
	// is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek .
	// 
	// 
	// References:
	// 1: #Ask
	// 2: #FullTranscript
	bool InputAddFileUrl(const char *url, const char *summary);


	// Adds an image to the potentially multimodal input that will be sent in the next
	// call to Ask . The bd contains the images data. The image data must be jpeg,
	// png, or webp format.
	// 
	// If FullTranscript is _CKFALSE_, summary is sent in subsequent interactions instead
	// of the image data. If FullTranscript is true, summary is not sent, and the image
	// data is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek . DeepSeek does not appear to expose an
	// OpenAI-compatible vision model (yet). You cannot send image URLs or image data
	// to DeepSeek.
	// 
	// 
	// References:
	// 1: #Ask
	// 2: #FullTranscript
	bool InputAddImageData(CkBinData &bd, const char *summary);


	// Adds an image located at a url to the potentially multimodal input that will be
	// sent in the next call to Ask .
	// 
	// If FullTranscript is _CKFALSE_, summary is sent in subsequent interactions instead
	// of the image URL. If FullTranscript is true, summary is not sent, and the image
	// URL is re-sent in each interaction.
	// 
	// This method cannot be used with DeepSeek . DeepSeek does not appear to expose an
	// OpenAI-compatible vision model (yet). You cannot send image URLs or image data
	// to DeepSeek.
	// 
	// 
	// References:
	// 1: #Ask
	// 2: #FullTranscript
	bool InputAddImageUrl(const char *url, const char *summary);


	// Adds text to the potentially multimodal input that will be sent in the next call
	// to Ask .
	// 
	// References:
	// 1: #Ask
	bool InputAddText(const char *text);


	// Adds text to the potentially multimodal input that will be sent in the next call
	// to Ask .
	// 
	// References:
	// 1: #Ask
	bool InputAddTextSb(CkStringBuilder &sb);


	// Clears the inputs to be sent in the next call to Ask .
	// 
	// References:
	// 1: #Ask
	void InputClear(void);


	// Returns the full list of conversation names in st.
	bool ListConvos(CkStringTable &st);


	// Creates and initializes a transcript for a new conversation. The name is a
	// unique name for the conversation. You can reference the conversation by this
	// name, such as for the ExportConvo method.
	// 
	// The sysMsg sets the broad behavior, tone, and role of the assistant. Example: "You
	// are a polite tutor who explains concepts clearly and simply." Think of it as the
	// high-level persona or instructions the model follows throughout the
	// conversation. The devMsg provides more technical or policy-level guidance.
	// Example: "Always respond in Markdown. Do not reveal internal reasoning. Keep
	// answers under 200 words." It’s like hidden scaffolding to enforce app rules,
	// formatting, or safety constraints.
	// 
	// Note: The first conversation created is automatically set as the SelectedConvo .
	// You can use any unique name for a conversation except * .
	// 
	// 
	// References:
	// 1: #ExportConvo
	// 2: #SelectedConvo
	bool NewConvo(const char *name, const char *sysMsg, const char *devMsg);


	// Retrieves the next available AI streaming mode response update. Use the PollAi
	// method to check if a response update is immediately accessible. The event name
	// is returned in sbName. If the event name is delta , the text is returned in sbDelta.
	// 
	// For the complete raw event JSON, use the GetLastJsonData function. Note that the
	// raw JSON format varies by AI provider.
	// 
	// Each AI provider (e.g., OpenAI, Claude, xAI) sends a unique set of events. Some
	// of these events mark the start and end of sections and content parts, while
	// others do not. Chilkat standardizes these events and returns the following event
	// types.
	//     * response_created — The server acknowledges the request and has created a
	//     response object. Nothing has been streamed yet — it’s just the signal that the
	//     response pipeline is open.
	//     * empty — Some AI providers send empty heartbeat / keep-alive updates to
	//     ensure the stream stays open and proxies don't time out.
	//     * output_item_added — A new output item has been added to the response. An
	//     “output item” is a top-level container — could be text, tool call, or other
	//     structured content.
	//     * content_part_added — Within the output item, the model starts a new
	//     content part. A content part is typically a segment of a specific type (e.g.,
	//     text, JSON snippet, or image reference).
	//     * delta — These are the incremental text tokens being streamed. Each delta
	//     contains the next piece of text (like characters or words). You’ll see many of
	//     these in sequence while the model is generating.
	//     * output_text_done — Marks the end of the text streaming for that content
	//     part. No more deltas will arrive for this part.
	//     * content_part_done — Closes the current content part. Tells you the model
	//     is finished with that segment (e.g., done streaming a paragraph).
	//     * output_item_done — Closes the current output item entirely. Means that
	//     item is fully complete (all its parts are done).
	//     * response_completed — The entire response object is finished. No more items
	//     will be added, and the stream will soon close.
	//     * null_terminator — The stream is closed. All streaming responses end with a
	//     single null_terminator.
	// 
	// maxWaitMs defines the maximum wait time to receive the complete event. For instance,
	// if PollAi signals an available streaming update but only part of the event JSON
	// has been received, the rest is probably on its way. In such cases, this method
	// must wait to receive the entire JSON.
	// 
	// 
	// References:
	// 1: #PollAi
	// 2: #GetLastJsonData
	bool NextAiEvent(int maxWaitMs, CkStringBuilder &sbName, CkStringBuilder &sbDelta);


	// Returns immediately with one of the following values:
	// 
	// -1 - Error
	// 0 - No streaming event updates are available.
	// 1 - A streaming event updates is ready for retrieval via NextAiEvent
	// 2 - The streaming AI response has already completed, or no streaming response is
	// ongoing.
	// 
	// If abort is true, then the streaming response is aborted and this method
	// returns the value 2 . Applications should pass in false for abort to continue
	// streaming.
	// 
	// 
	// References:
	// 1: #NextAiEvent
	int PollAi(bool abort);


	// Sets additional Ask params such as temperature , effort , and max_output_tokens
	// .
	// 
	// References:
	// 1: #Ask
	bool SetAskParams(CkJsonObject &json);


	// This method copies connection settings, including HTTP proxy, SOCKS proxy,
	// network interface IP address, and other related settings from sock. It's
	// optional; if not used, default settings apply. Call this method before sending
	// REST API requests to an AI provider.
	bool SetConnectionSettings(CkSocket &sock);


	// Sets additional provider params needed for some pre-defined providers. As of
	// this current version, the possible params are:
	//     1. azure.clientId , a GUID/UUID such as 17280f2d-f709-4a7b-af1d-9928190e13cf
	//     2. azure.clientSecret , such as UZc8Q~YBrRIgfe_zbAOwWV.8ikuHa3JJF7LvCdt.
	//     3. azure.tenantId , a GUID/UUID such as aa4b5625-a31f-44dd-94ec-e2f6c0c64d2c
	//     4. azure.location , such as eastus
	//     5. azure.subscription , a GUID/UUID such as
	//     4abd4bf6-5260-4795-90f6-1e91ce4f582c
	bool SetProviderParams(CkJsonObject &json);


	// This method is provided for convenience. It causes the calling thread to sleep
	// for a number of milliseconds.
	void SleepMs(int millisec);






	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif
	
#endif
